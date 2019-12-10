/**
 * To allow users to have a single check to see if running on the Ouya that also consideres the simulation flag *
 */
public static boolean isRunningOnOuya() {
    return runningOnOuya || simulateRunningOnOuya;
}
