#ifndef __ZIAJEK_BASIC_DEFINES_444__H__

#define __ZIAJEK_BASIC_DEFINES_444__H__

namespace ZIAJEK_BASIC_DEFINES_444
{
    int LOOPER;
}

#define BLANC std::cout<<std::endl
#define CARET std::cout<<"\r\n"
#define SPACE std::cout<<" "

#define PRINT(x) std::cout<<x
#define PRINTLN(x) std::cout<<x<<"\r\n"                                                         // LN -> New Line
#define PRINTEND(x) std::cout<<x<<std::endl                                                     // END -> std:endl, END of line

#define XPRINT(x) std::cout<<"0x"<<std::hex<<x<<std::dec                                        // X - > heXadecimal
#define XPRINTLN(x) std::cout<<"0x"<<std::hex<<x<<std::dec<<"\r\n"
#define XPRINTEND(x) std::cout<<"0x"<<std::hex<<x<<std::dec<<std::endl

#define LPRINT(x) std::cout<<std::boolalpha<<x<<std::noboolalpha                                // L -> Logic
#define LPRINTLN(x) std::cout<<std::boolalpha<<x<<std::noboolalpha<<"\r\n"
#define LPRINTEND(x) std::cout<<std::boolalpha<<x<<std::noboolalpha<<std::endl

#define loop(HOW_MUCH) ZIAJEK_BASIC_DEFINES_444::LOOPER = (HOW_MUCH - 1); \
                       for( ; ZIAJEK_BASIC_DEFINES_444::LOOPER >= 0; -- ZIAJEK_BASIC_DEFINES_444::LOOPER )


#endif
