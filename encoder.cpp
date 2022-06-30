#include "encoder.h"
#include <wiringPi.h>
#include <vector>

Encoder::Encoder(unsigned char pinALoc, unsigned char pinBLoc)
    : pinA{pinALoc}, pinB{pinBLoc}
{
    wiringPiSetup();
    pinMode(pinA, INPUT);
    pinMode(pinB, INPUT);

    position = 0;
    state = 0;

    if (digitalRead(pinA))
    {
        state |= 1;
    }
    if (digitalRead(pinB))
    {
        state |= 2;
    }
    registerCallback();
}

int Encoder::read()
{
    return position;
}

void update(unsigned char pin);

void interrupt0(void) { update(0); }
void interrupt1(void) { update(1); }
void interrupt2(void) { update(2); }
void interrupt3(void) { update(3); }
void interrupt4(void) { update(4); }
void interrupt5(void) { update(5); }
void interrupt6(void) { update(6); }
void interrupt7(void) { update(7); }
void interrupt8(void) { update(8); }
void interrupt9(void) { update(9); }
void interrupt10(void) { update(10); }
void interrupt11(void) { update(11); }
void interrupt12(void) { update(12); }
void interrupt13(void) { update(13); }
void interrupt14(void) { update(14); }
void interrupt15(void) { update(15); }
void interrupt16(void) { update(16); }
void interrupt17(void) { update(17); }
void interrupt18(void) { update(18); }
void interrupt19(void) { update(19); }
void interrupt20(void) { update(20); }
void interrupt21(void) { update(21); }
void interrupt22(void) { update(22); }
void interrupt23(void) { update(23); }
void interrupt24(void) { update(24); }
void interrupt25(void) { update(25); }
void interrupt26(void) { update(26); }
void interrupt27(void) { update(27); }
void interrupt28(void) { update(28); }
void interrupt29(void) { update(29); }

std::vector<Encoder *> lookupTable;

void Encoder::registerCallback()
{
    lookupTable.push_back(this);
    switch (pinA)
    {
    case 0:
        wiringPiISR(0, INT_EDGE_BOTH, &interrupt0);
        break;
    case 1:
        wiringPiISR(1, INT_EDGE_BOTH, &interrupt1);
        break;
    case 2:
        wiringPiISR(2, INT_EDGE_BOTH, &interrupt2);
        break;
    case 3:
        wiringPiISR(3, INT_EDGE_BOTH, &interrupt3);
        break;
    case 4:
        wiringPiISR(4, INT_EDGE_BOTH, &interrupt4);
        break;
    case 5:
        wiringPiISR(5, INT_EDGE_BOTH, &interrupt5);
        break;
    case 6:
        wiringPiISR(6, INT_EDGE_BOTH, &interrupt6);
        break;
    case 7:
        wiringPiISR(7, INT_EDGE_BOTH, &interrupt7);
        break;
    case 8:
        wiringPiISR(8, INT_EDGE_BOTH, &interrupt8);
        break;
    case 9:
        wiringPiISR(9, INT_EDGE_BOTH, &interrupt9);
        break;
    case 10:
        wiringPiISR(10, INT_EDGE_BOTH, &interrupt10);
        break;
    case 11:
        wiringPiISR(11, INT_EDGE_BOTH, &interrupt11);
        break;
    case 12:
        wiringPiISR(12, INT_EDGE_BOTH, &interrupt12);
        break;
    case 13:
        wiringPiISR(13, INT_EDGE_BOTH, &interrupt13);
        break;
    case 14:
        wiringPiISR(14, INT_EDGE_BOTH, &interrupt14);
        break;
    case 15:
        wiringPiISR(15, INT_EDGE_BOTH, &interrupt15);
        break;
    case 16:
        wiringPiISR(16, INT_EDGE_BOTH, &interrupt16);
        break;
    case 17:
        wiringPiISR(17, INT_EDGE_BOTH, &interrupt17);
        break;
    case 18:
        wiringPiISR(18, INT_EDGE_BOTH, &interrupt18);
        break;
    case 19:
        wiringPiISR(19, INT_EDGE_BOTH, &interrupt19);
        break;
    case 20:
        wiringPiISR(20, INT_EDGE_BOTH, &interrupt20);
        break;
    case 21:
        wiringPiISR(21, INT_EDGE_BOTH, &interrupt21);
        break;
    case 22:
        wiringPiISR(22, INT_EDGE_BOTH, &interrupt22);
        break;
    case 23:
        wiringPiISR(23, INT_EDGE_BOTH, &interrupt23);
        break;
    case 24:
        wiringPiISR(24, INT_EDGE_BOTH, &interrupt24);
        break;
    case 25:
        wiringPiISR(25, INT_EDGE_BOTH, &interrupt25);
        break;
    case 26:
        wiringPiISR(26, INT_EDGE_BOTH, &interrupt26);
        break;
    case 27:
        wiringPiISR(27, INT_EDGE_BOTH, &interrupt27);
        break;
    case 28:
        wiringPiISR(28, INT_EDGE_BOTH, &interrupt28);
        break;
    case 29:
        wiringPiISR(29, INT_EDGE_BOTH, &interrupt29);
        break;
    }

    switch (pinB)
    {
    case 0:
        wiringPiISR(0, INT_EDGE_BOTH, &interrupt0);
        break;
    case 1:
        wiringPiISR(1, INT_EDGE_BOTH, &interrupt1);
        break;
    case 2:
        wiringPiISR(2, INT_EDGE_BOTH, &interrupt2);
        break;
    case 3:
        wiringPiISR(3, INT_EDGE_BOTH, &interrupt3);
        break;
    case 4:
        wiringPiISR(4, INT_EDGE_BOTH, &interrupt4);
        break;
    case 5:
        wiringPiISR(5, INT_EDGE_BOTH, &interrupt5);
        break;
    case 6:
        wiringPiISR(6, INT_EDGE_BOTH, &interrupt6);
        break;
    case 7:
        wiringPiISR(7, INT_EDGE_BOTH, &interrupt7);
        break;
    case 8:
        wiringPiISR(8, INT_EDGE_BOTH, &interrupt8);
        break;
    case 9:
        wiringPiISR(9, INT_EDGE_BOTH, &interrupt9);
        break;
    case 10:
        wiringPiISR(10, INT_EDGE_BOTH, &interrupt10);
        break;
    case 11:
        wiringPiISR(11, INT_EDGE_BOTH, &interrupt11);
        break;
    case 12:
        wiringPiISR(12, INT_EDGE_BOTH, &interrupt12);
        break;
    case 13:
        wiringPiISR(13, INT_EDGE_BOTH, &interrupt13);
        break;
    case 14:
        wiringPiISR(14, INT_EDGE_BOTH, &interrupt14);
        break;
    case 15:
        wiringPiISR(15, INT_EDGE_BOTH, &interrupt15);
        break;
    case 16:
        wiringPiISR(16, INT_EDGE_BOTH, &interrupt16);
        break;
    case 17:
        wiringPiISR(17, INT_EDGE_BOTH, &interrupt17);
        break;
    case 18:
        wiringPiISR(18, INT_EDGE_BOTH, &interrupt18);
        break;
    case 19:
        wiringPiISR(19, INT_EDGE_BOTH, &interrupt19);
        break;
    case 20:
        wiringPiISR(20, INT_EDGE_BOTH, &interrupt20);
        break;
    case 21:
        wiringPiISR(21, INT_EDGE_BOTH, &interrupt21);
        break;
    case 22:
        wiringPiISR(22, INT_EDGE_BOTH, &interrupt22);
        break;
    case 23:
        wiringPiISR(23, INT_EDGE_BOTH, &interrupt23);
        break;
    case 24:
        wiringPiISR(24, INT_EDGE_BOTH, &interrupt24);
        break;
    case 25:
        wiringPiISR(25, INT_EDGE_BOTH, &interrupt25);
        break;
    case 26:
        wiringPiISR(26, INT_EDGE_BOTH, &interrupt26);
        break;
    case 27:
        wiringPiISR(27, INT_EDGE_BOTH, &interrupt27);
        break;
    case 28:
        wiringPiISR(28, INT_EDGE_BOTH, &interrupt28);
        break;
    case 29:
        wiringPiISR(29, INT_EDGE_BOTH, &interrupt29);
        break;
    }
}

void update(unsigned char pin)
{
    for (int i = 0; i < lookupTable.size(); i++)
    {
        if (lookupTable.at(i)->pinA == pin || lookupTable.at(i)->pinB == pin) //found the encoder which is interrupting
        {
            Encoder *currentEncoder = lookupTable.at(i);

            unsigned char currentState = (currentEncoder->state) & 3;
            if (digitalRead(currentEncoder->pinA))
            {
                currentState |= 4;
            }
            if (digitalRead(currentEncoder->pinB))
            {
                currentState |= 8;
            }

            (currentEncoder->state) = currentState >> 2;
            if (currentState == 1 || currentState == 7 || currentState == 8 || currentState == 14)
            {
                (currentEncoder->position) += 1;
            }
            else if (currentState == 2 || currentState == 4 || currentState == 11 || currentState == 13)
            {
                (currentEncoder->position) -= 1;
            }
            else if (currentState == 3 || currentState == 12)
            {
                (currentEncoder->position) += 2;
            }
            else if (currentState == 6 || currentState == 9)
            {
                (currentEncoder->position) -= 2;
            }
        }
    }
}