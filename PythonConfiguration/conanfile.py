from conan import ConanFile


class CompressorRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"

    def requirements(self):
        print('CompressorRecipe::requirements() called')
        print(f'\tOS       : {self.settings.os}')
        print(f'\tCompiler : {self.settings.get_safe("compiler")}')

        self.requires("zlib/1.2.11")

    def build_requirements(self):
        print('CompressorRecipe::build_requirements() called')

        self.tool_requires("cmake/3.22.6")
        if self.settings.os == "Linux":
            # self.tool_requires("cmake/3.22.6")
            print('Install some Linux specific tools.....')