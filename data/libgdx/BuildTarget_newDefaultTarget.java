/**
 * Creates a new default BuildTarget for the given OS, using common default values.
 */
public static BuildTarget newDefaultTarget(BuildTarget.TargetOs type, boolean is64Bit) {
    if (type == TargetOs.Windows && !is64Bit) {
        // Windows 32-Bit
        return new BuildTarget(TargetOs.Windows, false, new String[] { "**/*.c" }, new String[0], new String[] { "**/*.cpp" }, new String[0], new String[0], "i686-w64-mingw32-", "-c -Wall -O2 -mfpmath=sse -msse2 -fmessage-length=0 -m32", "-c -Wall -O2 -mfpmath=sse -msse2 -fmessage-length=0 -m32", "-Wl,--kill-at -shared -m32 -static -static-libgcc -static-libstdc++");
    }
    if (type == TargetOs.Windows && is64Bit) {
        // Windows 64-Bit
        return new BuildTarget(TargetOs.Windows, true, new String[] { "**/*.c" }, new String[0], new String[] { "**/*.cpp" }, new String[0], new String[0], "x86_64-w64-mingw32-", "-c -Wall -O2 -mfpmath=sse -msse2 -fmessage-length=0 -m64", "-c -Wall -O2 -mfpmath=sse -msse2 -fmessage-length=0 -m64", "-Wl,--kill-at -shared -static -static-libgcc -static-libstdc++ -m64");
    }
    if (type == TargetOs.Linux && !is64Bit) {
        // Linux 32-Bit
        return new BuildTarget(TargetOs.Linux, false, new String[] { "**/*.c" }, new String[0], new String[] { "**/*.cpp" }, new String[0], new String[0], "", "-c -Wall -O2 -mfpmath=sse -msse -fmessage-length=0 -m32 -fPIC", "-c -Wall -O2 -mfpmath=sse -msse -fmessage-length=0 -m32 -fPIC", "-shared -m32");
    }
    if (type == TargetOs.Linux && is64Bit) {
        // Linux 64-Bit
        return new BuildTarget(TargetOs.Linux, true, new String[] { "**/*.c" }, new String[0], new String[] { "**/*.cpp" }, new String[0], new String[0], "", "-c -Wall -O2 -mfpmath=sse -msse -fmessage-length=0 -m64 -fPIC", "-c -Wall -O2 -mfpmath=sse -msse -fmessage-length=0 -m64 -fPIC", "-shared -m64 -Wl,-wrap,memcpy");
    }
    if (type == TargetOs.MacOsX && !is64Bit) {
        // Mac OS X x86 & x86_64
        BuildTarget mac = new BuildTarget(TargetOs.MacOsX, false, new String[] { "**/*.c" }, new String[0], new String[] { "**/*.cpp" }, new String[0], new String[0], "", "-c -Wall -O2 -arch i386 -DFIXED_POINT -fmessage-length=0 -fPIC -mmacosx-version-min=10.5", "-c -Wall -O2 -arch i386 -DFIXED_POINT -fmessage-length=0 -fPIC -mmacosx-version-min=10.5", "-shared -arch i386 -mmacosx-version-min=10.5");
        return mac;
    }
    if (type == TargetOs.MacOsX && is64Bit) {
        // Mac OS X x86 & x86_64
        BuildTarget mac = new BuildTarget(TargetOs.MacOsX, true, new String[] { "**/*.c" }, new String[0], new String[] { "**/*.cpp" }, new String[0], new String[0], "", "-c -Wall -O2 -arch x86_64 -DFIXED_POINT -fmessage-length=0 -fPIC -mmacosx-version-min=10.5", "-c -Wall -O2 -arch x86_64 -DFIXED_POINT -fmessage-length=0 -fPIC -mmacosx-version-min=10.5", "-shared -arch x86_64 -mmacosx-version-min=10.5");
        return mac;
    }
    if (type == TargetOs.Android) {
        BuildTarget android = new BuildTarget(TargetOs.Android, false, new String[] { "**/*.c" }, new String[0], new String[] { "**/*.cpp" }, new String[0], new String[0], "", "-O2 -Wall -D__ANDROID__", "-O2 -Wall -D__ANDROID__", "-lm");
        return android;
    }
    if (type == TargetOs.IOS) {
        // iOS, 386 simulator and armv7a, compiled to fat static lib
        BuildTarget ios = new BuildTarget(TargetOs.IOS, false, new String[] { "**/*.c" }, new String[0], new String[] { "**/*.cpp" }, new String[0], new String[0], "", "-c -Wall -O2", "-c -Wall -O2", "rcs");
        return ios;
    }
    throw new RuntimeException("Unknown target type");
}
