#!/usr/bin/perl
use strict;
use warnings;

sub calculate_average {
    my ($math, $science, $english) = @_;
    return ($math + $science + $english) / 3.0;
}

sub determine_grade {
    my ($average) = @_;
    
    if ($average >= 90) {
        return 'A';
    } elsif ($average >= 80) {
        return 'B';
    } elsif ($average >= 70) {
        return 'C';
    } elsif ($average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

# Main program
print "=== Student Grade Calculator ===\n";

print "Enter student name: ";
my $name = <STDIN>;
chomp($name);  # Remove trailing newline

print "Enter math score (0-100): ";
my $math = <STDIN>;
chomp($math);

print "Enter science score (0-100): ";
my $science = <STDIN>;
chomp($science);

print "Enter english score (0-100): ";
my $english = <STDIN>;
chomp($english);

# Calculate average and grade
my $average = calculate_average($math, $science, $english);
my $grade = determine_grade($average);

# Display results
print "\n";
print "Student: $name\n";
printf "Average: %.2f\n", $average;
print "Grade: $grade\n";
