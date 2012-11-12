#! /usr/bin/env python

import sys

def hello_world(name):
    print 'Hello ', name

if __name__ == "__main__":
    print 'Please enter your name: '
    name = sys.stdin.readline()
    hello_world(name)
    
