package com.company;

public class JNIHelloWorld {
    public native String stringFromJNI();
    public native int intFromJNI();

    public native String stringToJNI(String str);
    public native int intToJNI(int val);

    static {
        System.load("D:/BSU/android/task_1/C++/Task_1_C/x64/Debug/Task_1_C.dll");
    }
}
