var grade = "D"
var result;
switch (grade) {
    case "A":
        result += "10";
    case "B":
        result += " 9";
    case "C":
        result += " 8";
    case "D":
        result += " 6";
    default:
        result += " 0";
  
}
document.write(result)