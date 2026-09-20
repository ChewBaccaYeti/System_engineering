program GradeCalculator
    implicit none
    
    character(len=30) :: name
    integer :: math, science, english
    real :: average
    character(len=1) :: grade
    
contains
    
    function CalculateAverage(m, s, e) result(avg)
        integer, intent(in) :: m, s, e
        real :: avg
        avg = (m + s + e) / 3.0
    end function CalculateAverage
    
    function DetermineGrade(avg) result(gr)
        real, intent(in) :: avg
        character(len=1) :: gr
        
        if (avg >= 90.0) then
            gr = 'A'
        else if (avg >= 80.0) then
            gr = 'B'
        else if (avg >= 70.0) then
            gr = 'C'
        else if (avg >= 60.0) then
            gr = 'D'
        else
            gr = 'F'
        end if
    end function DetermineGrade
    
end program GradeCalculator

program Main
    implicit none
    character(len=30) :: name
    integer :: math, science, english
    real :: average
    character(len=1) :: grade
    
    print *, '=== Student Grade Calculator ==='
    write(*, '(A)', advance='no') 'Enter student name: '
    read(*, '(A)') name
    
    write(*, '(A)', advance='no') 'Enter math score (0-100): '
    read(*, *) math
    
    write(*, '(A)', advance='no') 'Enter science score (0-100): '
    read(*, *) science
    
    write(*, '(A)', advance='no') 'Enter english score (0-100): '
    read(*, *) english
    
    ! Calculate average and grade
    average = CalculateAverage(math, science, english)
    grade = DetermineGrade(average)
    
    ! Display results
    print *
    write(*, '(A, A)') 'Student: ', trim(name)
    write(*, '(A, F6.2)') 'Average: ', average
    write(*, '(A, A)') 'Grade: ', grade
    
end program Main
