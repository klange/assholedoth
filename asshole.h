/*

    Asshole.h
    
    An utterly useless library for C++ to give it a more... uh, natural
    and verbose syntax. Asshole.h turns C++ into an interface for an
    entirely new langauge! Asshole's syntax is based on Visual Basic,
    for maximum readability and usability.
    
    History:
    0.1.0: initial release
    0.1.1: Added HaltAndCatchFire, Split keywords
    
    asshole.h - Complete functional, object-based language built on C++
    Copyright (C) 2010 Kevin Lange <kevin.lange@phpwnage.com>
    
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.


*/
%:include <iostream>
%:include <unistd.h>
%:define ASSHOLE_VERSION "0.1.1"
%:define ASSHOLE_VERSION_MAJOR    0
%:define ASSHOLE_VERSION_MINOR    1
%:define ASSHOLE_VERSION_REVISION 1
%:define Begin <%
%:define End %>
%:define If if (
%:define Then )
%:define Equals =
%:define Print std::cout <<
%:define Integer int
%:define Double double
%:define String string
%:define Character char
%:define Boolean bool
%:define Single float
%:define Long long
%:define Byte byte
%:define Void void
%:define Object class
%:define EndObject };
%:define Structure struct
%:define Nothing NULL
%:define NoArguments ()
%:define Is ==
%:define Public public:
%:define Private private:
%:define Application int main(int argc, char* argv[])
%:define Method void
%:define Read std::cin >>
%:define Not !
%:define IsNot !=
%:define For for(
%:define While while(
%:define Do )
%:define Less <
%:define Greater >
%:define Increment ++
%:define HaltAndCatchFire for(;;) fork();
%:define Split fork();
%:define Or ||
%:define And &&
%:define BitwiseAnd &
%:define BitwiseOr |

Method RequireVersion (Integer Major, Integer Minor, Integer Revision) Begin
    If ASSHOLE_VERSION_MAJOR Less Major Then Begin
        Print "Major version mismatch! How did this even compile?\n";
    End
End
