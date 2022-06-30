A library to use rotary encoders with wiring pi in C++.

To use the encoders, simply create a new encoder (specifying its pins) and read from it

'''c++
Encoder enc(0, 1);
int tics = enc.read();
'''
