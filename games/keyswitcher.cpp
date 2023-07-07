/** ONLY WORKS ON WINDOWS
 * switches the [SPACE] key to the literal string "[SPACE]"
 * small prank on coworkers
 *
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    bool pressed = false;
    while (true)
    {
        if (GetKeyState(VK_SPACE) & 0x8000)
        {
            if (!pressed)
            {
                INPUT input[7] = {0};
                input[0].type = INPUT_KEYBOARD;
                input[0].ki.wVk = VK_OEM_4; // VK_LBRACKET
                input[1].type = INPUT_KEYBOARD;
                input[1].ki.wVk = 0x53; // VK_S
                input[2].type = INPUT_KEYBOARD;
                input[2].ki.wVk = 0x50; // VK_P
                input[3].type = INPUT_KEYBOARD;
                input[3].ki.wVk = 0x41; // VK_A
                input[4].type = INPUT_KEYBOARD;
                input[4].ki.wVk = 0x43; // VK_C
                input[5].type = INPUT_KEYBOARD;
                input[5].ki.wVk = 0x45; // VK_E
                input[6].type = INPUT_KEYBOARD;
                input[6].ki.wVk = VK_OEM_6; // VK_RBRACKET
                SendInput(4, input, sizeof(INPUT));
                pressed = true;
            }
        }
        else
        {
            pressed = false;
        }
    }

    return 0;
}
*/
