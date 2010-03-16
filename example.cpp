%:include "asshole.h"

Object MyObject Begin
    Public
        Method PrintMyValue NoArguments Begin
            Print myValue << "\n";
        End
        Method SetMyValue (Integer newValue) Begin
            myValue Equals newValue;
        End
    Private
        Integer myValue;
EndObject

Application Begin
    MyObject newObject;
    newObject.SetMyValue(5);
    Integer random;
    Read random;
    If random IsNot 2 Then Begin
        Print "Bite me\n";
    End
    For Integer i Equals 0; i Less 4; i Increment Do Begin
        Print i << "\n";
    End
    Integer j Equals 0;
    While j Less 10 Do Begin
        Print j << "\n";
        Increment j;
    End
End
