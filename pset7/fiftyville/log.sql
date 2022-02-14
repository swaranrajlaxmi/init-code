-- Keep a log of any SQL queries you execute as you solve the mystery.
-- getting name of thief
SELECT name FROM people
WHERE license_plate IN
-- get the license_plate of car within 10 min duration
(SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND minute > 15 AND minute < 25 AND activity LIKE "exit")
AND id IN (SELECT person_id FROM bank_accounts WHERE account_number IN (SELECT account_number FROM atm_transactions
WHERE transaction_type LIKE "withdraw" AND month = 7 AND day = 28 AND atm_location LIKE "Leggett Street"))
AND phone_number IN (SELECT caller FROM phone_calls WHERE month = 7 AND day = 28 AND duration < 60);
AND passport_number IN (SELECT passport_number FROM passengers WHERE flight_id IN (SELECT id FROM flights WHERE month = 7 AND day = 29 ORDER BY hour, minute ASC LIMIT 1));



SELECT city FROM airports WHERE id IN (SELECT destination_airport_id FROM flights WHERE id IN (SELECT flight_id FROM passengers
WHERE passport_number IN (SELECT passport_number FROM people WHERE name LIKE 'Bruce')));