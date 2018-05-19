#!/bin/python
import math, os, sys
from optparse import OptionParser
#defining functions
#a function that puts each character in an array element
def stringToCharcterArray(string):
    output = [ord(letter) for letter in string]
    return output
#Command Line options
parser = OptionParser()
parser.add_option("-e", "--encrypt", dest="encrypt",
                  help="To set a file to encrypt", metavar="")
parser.add_option("-d", "--decrypt", dest="decrypt",
                  help="To set a file to decrypt", metavar="")
(options, args) = parser.parse_args()
print(stringToCharcterArray("kek"))
input = "Key:"
