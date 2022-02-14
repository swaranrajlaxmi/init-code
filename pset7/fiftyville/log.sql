-- Keep a log of any SQL queries you execute as you solve the mystery.
-- getting name of thief
SELECT name FROM people
WHERE license_plate IN
-- get the license_plate of car within 10 min duration
(SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND minute > 15 AND minute < 25 AND activity LIKE "exit");
AND 