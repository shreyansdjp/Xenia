#ifndef MACROS_H_
#define MACROS_H_


//Taken from the libre engine

#define LIBRE_CREATE_STRUCT_BEGIN_INTERNAL(DATATYPENAME)\
    struct DATATYPENAME{\

#define LIBRE_CREATE_STRUCT_END_INTERNAL()\
    };\

#define LIBRE_CREATE_STRUCT_MEMBER_INTERNAL(DATATYPE,DATANAME)\
        DATATYPE DATANAME;\

#define LIBRE_CREATE_STRUCT_ONE_MEMBER(DTNAME,DATATYPE,DATA)\
    LIBRE_CREATE_STRUCT_BEGIN_INTERNAL(DTNAME)\
    LIBRE_CREATE_STRUCT_MEMBER_INTERNAL(DATATYPE,DATA)\
    LIBRE_CREATE_STRUCT_END_INTERNAL()\

#define LIBRE_CREATE_STRUCT_TWO_MEMBERS(DTNAME,DATATYPE1,DATA1,DATATYPE2,DATA2)\
    LIBRE_CREATE_STRUCT_BEGIN_INTERNAL(DTNAME)\
    LIBRE_CREATE_STRUCT_MEMBER_INTERNAL(DATATYPE1,DATA1)\
    LIBRE_CREATE_STRUCT_MEMBER_INTERNAL(DATATYPE2,DATA2)\
    LIBRE_CREATE_STRUCT_END_INTERNAL()\

#define LIBRE_CREATE_STRUCT_THREE_MEMBERS(DTNAME,DATATYPE1,DATA1,DATATYPE2,DATA2,DATATYPE3,DATA3)\
    LIBRE_CREATE_STRUCT_BEGIN_INTERNAL(DTNAME)\
    LIBRE_CREATE_STRUCT_MEMBER_INTERNAL(DATATYPE1,DATA1)\
    LIBRE_CREATE_STRUCT_MEMBER_INTERNAL(DATATYPE2,DATA2)\
    LIBRE_CREATE_STRUCT_MEMBER_INTERNAL(DATATYPE3,DATA3)\
    LIBRE_CREATE_STRUCT_END_INTERNAL()\

#define LIBRE_CREATE_STRUCT_FOUR_MEMBERS(DTNAME,DATATYPE1,DATA1,DATATYPE2,DATA2,DATATYPE3,DATA3,DATATYPE4,DATA4)\
    LIBRE_CREATE_STRUCT_BEGIN_INTERNAL(DTNAME)\
    LIBRE_CREATE_STRUCT_MEMBER_INTERNAL(DATATYPE1,DATA1)\
    LIBRE_CREATE_STRUCT_MEMBER_INTERNAL(DATATYPE2,DATA2)\
    LIBRE_CREATE_STRUCT_MEMBER_INTERNAL(DATATYPE3,DATA3)\
    LIBRE_CREATE_STRUCT_MEMBER_INTERNAL(DATATYPE4,DATA4)\

        LIBRE_CREATE_STRUCT_END_INTERNAL()\




#endif// MACROS.h