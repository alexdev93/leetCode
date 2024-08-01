function countSeniorCitizens(details: string[]): number {
    let count = 0;
    for (const detail of details) {
        // Extract age substring and convert it to an integer
        const age = parseInt(detail.substring(11, 13), 10);
        // Check if the age is greater than 60
        if (age > 60) {
            count++;
        }
    }
    return count;
}

// Example usage:
const details1: string[] = ["7868190130M7522", "5303914400F9211", "9273338290F4010"];
const details2: string[] = ["1313579440F2036", "2921522980M5644"];

console.log(countSeniorCitizens(details1));  // Output: 2
console.log(countSeniorCitizens(details2));  // Output: 0
