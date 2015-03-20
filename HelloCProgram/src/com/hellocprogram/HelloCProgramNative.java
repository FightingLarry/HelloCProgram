package com.hellocprogram;

public class HelloCProgramNative {

    static {
        System.loadLibrary("helloc");
    }

    public native static String nativePrintHello();

    public native static int sum(int x, int y);

    public native static void testlog(String log);

}
