
#include "dmrhythm.h"

int main( int argc, char* argv[] ) {

    dmrhythm_interface* module = dmrhythmGetModule();
    if (module)
    {
        module->Release();
    }
    return 0;
}
