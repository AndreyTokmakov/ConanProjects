from conan import ConanFile
from conan.tools.cmake import cmake_layout


class BoostRecipe(ConanFile):

    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"

    def requirements(self):
        print('Params:')
        print(f'\tOS       : {self.settings.os}')
        print(f'\tCompiler : {self.settings.get_safe("compiler")}')

        self.requires("boost/1.85.0")
        self.requires("openssl/3.3.1")


    def build_requirements(self):
        self.tool_requires("cmake/3.30.0")

    '''
    def layout(self):
        cmake_layout(self)
    '''