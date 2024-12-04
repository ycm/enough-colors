# Comment
function greet(name)
    println("Hello, $name!")
end

function add(λ, μ)
    return λ + μ
end

function square_array(arr)
    return [x^2 for x in arr]
end

function main()
    greet("Alice")
    println("Sum of 3 and 5: $(add(3, 5))")
    numbers = [1, 2, 3, 4, 5]
    squares = square_array(numbers)
    println("Squares: $squares")
end

main()
