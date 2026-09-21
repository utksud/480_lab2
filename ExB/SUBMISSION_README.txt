ENSF 480 LAB 2 SUBMISSION CHECKLIST

1. Replace the placeholder author line in graphicsWorld.cpp with both partners'
   full names and UCIDs.

2. Get your partner's completed Exercise A source files and console output.
   Keep Exercise A and Exercise B in separate folders.

3. Build and run both exercises. Save the complete console output from each.

4. Prepare the required submission pair for each exercise:
   - Exercise_A_Report.pdf: both partners' names/UCIDs, Exercise A source code,
     and Exercise A program output.
   - Exercise_A_Source.zip: all Exercise A .h and .cpp files.
   - Exercise_B_Report.pdf: both partners' names/UCIDs, Exercise B source code,
     and Exercise B program output.
   - Exercise_B_Source.zip: all Exercise B .h and .cpp files.

5. Do not include build artifacts such as .o files or compiled executables in
   either source ZIP.

6. Check the D2L submission page before uploading. If it has separate Exercise
   A and Exercise B boxes, upload each PDF/ZIP pair to its matching box. If it
   has one box, upload all four files unless D2L explicitly asks for one outer
   ZIP. Unless the course instructions say otherwise, only one partner should
   submit, and both reports must identify both partners.

BUILD COMMAND FOR EXERCISE B

g++ -std=c++17 -Wall -Wextra -Wpedantic point.cpp shape.cpp square.cpp \
    rectangle.cpp graphicsWorld.cpp main.cpp -o lab2exeb

RUN COMMAND

./lab2exeb
