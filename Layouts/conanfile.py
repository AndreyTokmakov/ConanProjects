from conan import ConanFile


class CompressorRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"

    def requirements(self):
        print('1. CompressorRecipe::requirements() called')
        print(f'\tOS       : {self.settings.os}')
        print(f'\tCompiler : {self.settings.get_safe("compiler")}')

        self.requires("zlib/1.2.11")

    def build_requirements(self):
        print('2. CompressorRecipe::build_requirements() called')

        self.tool_requires("cmake/3.22.6")
        if self.settings.os == "Linux":
            # self.tool_requires("cmake/3.22.6")
            print('Install some Linux specific tools.....')

    def layout(self):
        print('3. CompressorRecipe::layout() called')
        
        # We make the assumption that if the compiler is msvc the CMake generator is multi-config

        multi = True if self.settings.get_safe("compiler") == "msvc" else False
        if multi:
            self.folders.generators = os.path.join("build", "generators")
            self.folders.build = "build"
        else:
            self.folders.generators = os.path.join("build", str(self.settings.build_type), "generators")
            self.folders.build = os.path.join("build", str(self.settings.build_type))            