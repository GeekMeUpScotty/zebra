/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
package org.zeromq.zebra;

import org.junit.Assert;
import org.junit.Test;

public class XrapTrafficTest {
    static {
        try {
            System.loadLibrary ("zebrajni");
        }
        catch (Exception e) {
            System.exit (-1);
        }
    }
    @Test
    public void test () {
        XrapTraffic.test (false);
    }
}
