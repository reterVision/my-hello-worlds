#! /usr/bin/env python
import sys


if sys.version_info[:2] <= (2, 5):
    print 'Please enter your name: '
    name = sys.stdin.readline()
    print 'Hello ', name
else:
    import hello3
    hello3.main()
