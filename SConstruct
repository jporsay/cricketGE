platform = ARGUMENTS.get('platform', 'osx')

binDir = "bin"
includeDir = "include"
libDir = "libs/" + platform
srcDir = "src"

libs = ['sfml-graphics', 'sfml-window', 'sfml-system']

VariantDir(binDir, srcDir, duplicate = 0)
env = Environment(
    BINDIR = binDir,
    LIBDIR = libDir,
    CPPPATH = includeDir,
    LIBPATH = libDir,
    LIBS = libs
)
env.Repository(srcDir)

env.Program(binDir + '/tinyWings', Glob('*.cpp'))