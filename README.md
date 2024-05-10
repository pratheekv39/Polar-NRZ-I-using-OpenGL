It is recommended to run this application on Visual Studio 2022 as it already contains the required pre-requisites installed to run this program.

Here is the link to download Visual Studio 2022: (Note: Download Community version)
[Visual Studio 2022](https://visualstudio.microsoft.com/downloads/).

After installing it, follow the given steps:
  1) Create a new project
  2) Select Empty Project
  3) Give any name to the project and create project.
  4) From the top navigation bar , select
        i) Tools -> NuGet Package Manager -> Package Manager Console
       ii) At the bottom of the screen, a Package Manager Terminal is opened. Type the following command in the command line : Install-Package nupengl.core
  5) At the right hand side , select Source files : Right click on it and select Add -> New Item -> Select C++ file(cpp) and click on add
  6) You are now good to go , just copy the contents of Polar NRZ-I.cpp file that I have provided and paste it onto the file.
  7) Use the Local Windows Debugger option in the top bar to run the file or use the shortcut Ctrl +F5 .
  8) If you cannot understand how to do it , watch the given youtube video to setup your Visual Studio 2022:
      [Setting up OpenGL in Visual Studio 2022](https://youtu.be/PeeyWLzRWGg?si=5SRm5CczUR90dQLi)
     
  10) The output of the file is to be given dynamically ( i.e., on User Input, the Polar NRZ-I signal is generated)
      
        i)  On pressing 0 from the keyboard, the signal remains in the same level as that of before.
     
        ii) On pressing 1 from the keyboard, the signal alternates between positive and negative levels.(Here, on intial input of 1, it goes to the +ve level)
      
