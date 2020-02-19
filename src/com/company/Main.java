package com.company;

import java.io.Console;

public class Main {

    public static void main(String[] args) {
	// write your code here
        JNIHelloWorld p = new JNIHelloWorld();

        var str = p.stringFromJNI();
        var val = p.intFromJNI();

        var str2 = p.stringToJNI("String from Java");
        var val2 = p.intToJNI(21);

        var a = str;
        var b = val;

        var c = str2;
        var d = val2;

    }


}

