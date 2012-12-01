bin = "bin/"
includes = "include"
libs = "/libs"

env = Environment(
    BINDIR = bin,
    LIBDIR = libs,
    CPPPATH = includes
)
env.Repository("src/")
env.Program('bin/tinyWings', Glob('*.cpp'))