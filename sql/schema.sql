/*
Logs are bucketed by priority level,
0 holding most significant outputs
*/
CREATE TABLE IF NOT EXISTS logs0 (
    message VARCHAR(1024)
);