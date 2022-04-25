const students = ["Bob", "Alice", "Robert"];
const greetStudents = [];

for (let i = 0; i < students.length; i++) {
  greetStudents.push(`Hello, ${students[i]}!`);
}

console.log(greetStudents);