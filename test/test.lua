-- Dummy Lua program

local function greet(name)
    print("Hello, " .. name .. "!")
end
local function add(a, b)
    return a + b
end
local function squareArray(arr)
    local result = {}
    for i, value in ipairs(arr) do
        result[i] = value ^ 2
    end
    return result
end
greet("Alice")
print("Sum of 3 and 5: " .. add(3, 5))

local numbers = {1, 2, 3, 4, 5}
local squares = squareArray(numbers)
print("Squares: " .. table.concat(squares, ", "))
