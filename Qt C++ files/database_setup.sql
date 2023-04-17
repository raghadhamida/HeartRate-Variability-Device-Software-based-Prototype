-- Create tables
CREATE TABLE sessions (
    id INTEGER PRIMARY KEY,
    user_id INTEGER,
    start_time DATETIME,
    end_time DATETIME,
    duration INTEGER,
    challenge_level INTEGER,
    interval INTEGER,
    achievement INTEGER,
    coherence_scores TEXT
);

CREATE TABLE users (
    id INTEGER PRIMARY KEY,
    username TEXT UNIQUE,
    password TEXT
);

CREATE TABLE history (
    id INTEGER PRIMARY KEY,
    user_id INTEGER,
    session_id INTEGER,
    date DATETIME
);

-- Insert data
INSERT INTO users (username, password) VALUES ('john_doe', 'password123');
INSERT INTO users (username, password) VALUES ('Alice_smith', 'password456');

INSERT INTO sessions (user_id, start_time, end_time, duration, challenge_level, interval, achievement, coherence_scores) VALUES (1, '2023-04-13 10:00:00', '2023-04-13 11:00:00', 3600, 5, 4, 1, '2,4,5,6,7');
INSERT INTO sessions (user_id, start_time, end_time, duration, challenge_level, interval, achievement, coherence_scores) VALUES (2, '2023-04-12 13:00:00', '2023-04-12 13:30:00', 1800, 3, 5, 0, '1,2,3,4,5');

INSERT INTO history (user_id, session_id, date) VALUES (1, 1, '2023-04-13');
INSERT INTO history (user_id, session_id, date) VALUES (2, 2, '2023-04-12');

