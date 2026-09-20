function calculateGrade(average)
    if average >= 90 then
        return "A"
    elseif average >= 80 then
        return "B"
    elseif average >= 70 then
        return "C"
    elseif average >= 60 then
        return "D"
    else
        return "F"
    end
end

function main()
    while true do
        print("=== Student Grade Calculator ===")
        print("")
        
        io.write("Enter student name: ")
        local name = io.read()
        
        io.write("Enter math score (0-100): ")
        local math = tonumber(io.read())
        
        io.write("Enter science score (0-100): ")
        local science = tonumber(io.read())
        
        io.write("Enter english score (0-100): ")
        local english = tonumber(io.read())
        
        print("")
        
        local average = (math + science + english) / 3
        local grade = calculateGrade(average)
        
        print("Name: " .. name)
        print(string.format("Average: %.2f", average))
        print("Grade: " .. grade)
        print("")
        
        io.write("Calculate another student? (Y/N): ")
        local response = io.read()
        
        if response ~= "Y" and response ~= "y" then
            break
        end
    end
    
    print("Thank you for using the calculator!")
end

main()
