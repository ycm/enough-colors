-- Dummy SQL script
CREATE TABLE users (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    email VARCHAR(100) UNIQUE NOT NULL,
    age INT,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

INSERT INTO users (name, email, age) VALUES
('Alice', 'alice@example.com', 25),
('Bob', 'bob@example.com', 30);

SELECT * FROM users WHERE age > 20;

UPDATE users
SET age = age + 1
WHERE name = 'Alice';

DELETE FROM users WHERE age > 100;
