10 PRINT "=== Student Grade Calculator ==="
20 PRINT ""
30 INPUT "Enter student name: ", name$
40 INPUT "Enter math score (0-100): ", math
50 INPUT "Enter science score (0-100): ", science
60 INPUT "Enter english score (0-100): ", english
70 PRINT ""

80 average = (math + science + english) / 3
90 PRINT "Name: "; name$
100 PRINT "Average: "; INT(average * 100) / 100
110 PRINT ""

120 IF average >= 90 THEN grade$ = "A"
130 IF average >= 80 AND average < 90 THEN grade$ = "B"
140 IF average >= 70 AND average < 80 THEN grade$ = "C"
150 IF average >= 60 AND average < 70 THEN grade$ = "D"
160 IF average < 60 THEN grade$ = "F"

170 PRINT "Grade: "; grade$
180 PRINT ""
190 INPUT "Calculate another student? (Y/N): ", response$
200 IF response$ = "Y" OR response$ = "y" THEN GOTO 10
210 PRINT "Thank you for using the calculator!"
220 END
