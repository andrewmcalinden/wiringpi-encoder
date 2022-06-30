#pragma once

class Encoder
{
    //variables are public because they have to be modified by interrupt
    public:
    const unsigned char pinA;
    const unsigned char pinB;
    int position;
    unsigned char state;

    Encoder(unsigned char pinALoc, unsigned char pinBLoc);

    int read();

    void registerCallback();
};