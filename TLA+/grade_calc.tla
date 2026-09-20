---- MODULE GradeCalculator ----
EXTENDS Naturals, Sequences

(* Define the student record *)
Student == [name: STRING, math: 0..100, science: 0..100, english: 0..100]

(* Calculate average *)
CalcAverage(math, science, english) == (math + science + english) / 3

(* Determine grade from average *)
CalcGrade(avg) ==
    IF avg >= 90 THEN "A"
    ELSE IF avg >= 80 THEN "B"
    ELSE IF avg >= 70 THEN "C"
    ELSE IF avg >= 60 THEN "D"
    ELSE "F"

(* Define a valid student state *)
ValidStudent(s) ==
    /\ s.math \in 0..100
    /\ s.science \in 0..100
    /\ s.english \in 0..100

(* Compute final grade for a student *)
ComputeGrade(s) ==
    LET avg == CalcAverage(s.math, s.science, s.english)
    IN CalcGrade(avg)

(* Example: Alice's grades *)
Alice == [name: "Alice", math: 85, science: 90, english: 88]

(* Verify Alice's grades are valid *)
THEOREM AliceValid == ValidStudent(Alice)

(* Verify Alice gets grade B *)
THEOREM AliceGradeB == ComputeGrade(Alice) = "B"

====
