program GradeCalculator;

var
  name: string;
  math, science, english: integer;
  average: real;
  grade: char;

function CalculateAverage(m, s, e: integer): real;
begin
  CalculateAverage := (m + s + e) / 3;
end;

function DetermineGrade(avg: real): char;
begin
  if avg >= 90 then
    DetermineGrade := 'A'
  else if avg >= 80 then
    DetermineGrade := 'B'
  else if avg >= 70 then
    DetermineGrade := 'C'
  else if avg >= 60 then
    DetermineGrade := 'D'
  else
    DetermineGrade := 'F';
end;

begin
  { Main program }
  WriteLn('=== Student Grade Calculator ===');
  Write('Enter student name: ');
  ReadLn(name);
  
  Write('Enter math score (0-100): ');
  ReadLn(math);
  
  Write('Enter science score (0-100): ');
  ReadLn(science);
  
  Write('Enter english score (0-100): ');
  ReadLn(english);
  
  { Calculate average and grade }
  average := CalculateAverage(math, science, english);
  grade := DetermineGrade(average);
  
  { Display results }
  WriteLn;
  WriteLn('Student: ', name);
  WriteLn('Average: ', average:5:2);
  WriteLn('Grade: ', grade);
end.
