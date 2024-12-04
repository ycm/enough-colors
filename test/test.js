// Dummy JavaScript program
function greet(name) {
    console.log(`Hello, ${name}!`);
}

function add(a, b) {
    return a + b;
}

const numbers = [1, 2, 3, 4, 5];
const squares = numbers.map(num => num ** 2);

console.log("Squares:", squares);

greet("Alice");
console.log("Sum of 3 and 5:", add(3, 5));

document.querySelector("button")?.addEventListener("click", () => {
    alert("Button clicked!");
});
