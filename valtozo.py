#!/usr/bin/env python
# -*- coding: utf-8 -*-
a = int(input("Kérem az a változót: "))
b = int(input("Kérem a b változót: "))

a = b - a
b = b - a
a = b + a
print "Kivonás-összeadással:"
print "a={}".format(a)
print "b={}".format(b)

a = a * b
b = a / b
a = a / b
print "Szorzás-osztással:"
print "a={}".format(a)
print "b={}".format(b)

