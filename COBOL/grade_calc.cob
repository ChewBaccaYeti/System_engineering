       IDENTIFICATION DIVISION.
       PROGRAM-ID. GRADE-CALCULATOR.
       
       ENVIRONMENT DIVISION.
       INPUT-OUTPUT SECTION.
       FILE-CONTROL.
       
       DATA DIVISION.
       FILE SECTION.
       
       WORKING-STORAGE SECTION.
       01  WS-STUDENT-NAME        PIC X(30).
       01  WS-MATH-SCORE          PIC 999 VALUE 0.
       01  WS-SCIENCE-SCORE       PIC 999 VALUE 0.
       01  WS-ENGLISH-SCORE       PIC 999 VALUE 0.
       01  WS-AVERAGE             PIC 999V99 VALUE 0.
       01  WS-GRADE               PIC X VALUE SPACE.
       01  WS-RESPONSE            PIC X VALUE SPACE.
       01  WS-CONTINUE-FLAG       PIC X VALUE 'Y'.
       
       PROCEDURE DIVISION.
       MAIN-PROCEDURE.
           PERFORM UNTIL WS-CONTINUE-FLAG = 'N'
               DISPLAY "=== Student Grade Calculator ==="
               DISPLAY " "
               
               DISPLAY "Enter student name: " 
               ACCEPT WS-STUDENT-NAME
               
               DISPLAY "Enter math score (0-100): "
               ACCEPT WS-MATH-SCORE
               
               DISPLAY "Enter science score (0-100): "
               ACCEPT WS-SCIENCE-SCORE
               
               DISPLAY "Enter english score (0-100): "
               ACCEPT WS-ENGLISH-SCORE
               
               DISPLAY " "
               
               COMPUTE WS-AVERAGE = 
                   (WS-MATH-SCORE + WS-SCIENCE-SCORE + 
                    WS-ENGLISH-SCORE) / 3
               
               PERFORM CALCULATE-GRADE
               
               DISPLAY "Name: " WS-STUDENT-NAME
               DISPLAY "Average: " WS-AVERAGE
               DISPLAY "Grade: " WS-GRADE
               DISPLAY " "
               
               DISPLAY "Calculate another student? (Y/N): "
               ACCEPT WS-RESPONSE
               
               IF WS-RESPONSE = 'N' OR WS-RESPONSE = 'n'
                   MOVE 'N' TO WS-CONTINUE-FLAG
               END-IF
           END-PERFORM.
           
           DISPLAY "Thank you for using the calculator!"
           STOP RUN.
       
       CALCULATE-GRADE.
           IF WS-AVERAGE >= 90
               MOVE 'A' TO WS-GRADE
           ELSE IF WS-AVERAGE >= 80
               MOVE 'B' TO WS-GRADE
           ELSE IF WS-AVERAGE >= 70
               MOVE 'C' TO WS-GRADE
           ELSE IF WS-AVERAGE >= 60
               MOVE 'D' TO WS-GRADE
           ELSE
               MOVE 'F' TO WS-GRADE
           END-IF
           END-IF
           END-IF
           END-IF.
