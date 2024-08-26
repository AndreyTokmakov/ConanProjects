from conan import ConanFile


class JsonCppRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"
    exports_sources = "include/*"

    def requirements(self):
        self.requires("jsoncpp/1.9.5")
