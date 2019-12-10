public static boolean isSdkUpToDate(String sdkLocation) {
    File buildTools = new File(sdkLocation, "build-tools");
    if (!buildTools.exists()) {
        JOptionPane.showMessageDialog(null, "You have no build tools!\nUpdate your Android SDK with build tools version: " + DependencyBank.buildToolsVersion);
        return false;
    }
    File apis = new File(sdkLocation, "platforms");
    if (!apis.exists()) {
        JOptionPane.showMessageDialog(null, "You have no Android APIs!\nUpdate your Android SDK with API level: " + DependencyBank.androidAPILevel);
        return false;
    }
    String newestLocalTool = getLatestTools(buildTools);
    int[] localToolVersion = convertTools(newestLocalTool);
    int[] targetToolVersion = convertTools(DependencyBank.buildToolsVersion);
    if (compareVersions(targetToolVersion, localToolVersion)) {
        int value = JOptionPane.showConfirmDialog(null, "You have a more recent version of android build tools than the recommended.\nDo you want to use this version?", "Warning!", JOptionPane.YES_NO_OPTION);
        if (value != 0) {
            JOptionPane.showMessageDialog(null, "Using build tools: " + DependencyBank.buildToolsVersion);
        } else {
            DependencyBank.buildToolsVersion = newestLocalTool;
        }
    } else {
        if (!versionsEqual(localToolVersion, targetToolVersion)) {
            JOptionPane.showMessageDialog(null, "Please update your Android SDK, you need build tools: " + DependencyBank.buildToolsVersion);
            return false;
        }
    }
    int newestLocalApi = getLatestApi(apis);
    if (newestLocalApi > Integer.valueOf(DependencyBank.androidAPILevel)) {
        int value = JOptionPane.showConfirmDialog(null, "You have a more recent Android API than the recommended.\nDo you want to use this version?", "Warning!", JOptionPane.YES_NO_OPTION);
        if (value != 0) {
            JOptionPane.showMessageDialog(null, "Using API level: " + DependencyBank.androidAPILevel);
        } else {
            DependencyBank.androidAPILevel = String.valueOf(newestLocalApi);
        }
    } else {
        if (newestLocalApi != Integer.valueOf(DependencyBank.androidAPILevel)) {
            JOptionPane.showMessageDialog(null, "Please update your Android SDK, you need the Android API: " + DependencyBank.androidAPILevel);
            return false;
        }
    }
    return true;
}
