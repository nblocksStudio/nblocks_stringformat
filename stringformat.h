#ifndef __NB_STRINGFORMAT
#define __NB_STRINGFORMAT

#include "nworkbench.h"

class nBlock_StringFormat: public nBlockSimpleNode<1> {
public:
    nBlock_StringFormat(const char * formatString);
    void triggerInput(nBlocks_Message message);
    void endFrame(void);
private:
    char string_buffer_in[256];
    char string_buffer_out[256];
    const char * _format;
};

#endif
