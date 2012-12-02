platform = ARGUMENTS.get('platform', 'osx')

binDir = "bin"
includeDir = "include"
libDir = "libs/" + platform
srcDir = "src"

libs = ['sfml-graphics', 'sfml-window', 'sfml-system']

env = Environment(
    BINDIR = binDir,
    LIBDIR = libDir,
    CPPPATH = includeDir,
    LIBPATH = libDir,
    LIBS = libs
)
env.Repository(srcDir)

env.Program(binDir + '/tinyWings', Glob('*.cpp'))