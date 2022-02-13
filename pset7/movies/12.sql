"""SELECT title FROM movies JOIN stars ON stars.movie_id = movies.id JOIN people ON people.id = stars.person_id
WHERE people.name = "Johnny Depp" AND title IN
    (SELECT title FROM movies JOIN stars ON stars.movie_id = movies.id JOIN people ON people.id = stars.person_id
    WHERE people.name = "Helena Bonham Carter");"""


--SELECT movie_id FROM stars WHERE person_id IN (SELECT id FROM people WHERE name = "Johnny Depp" OR name = "Helena Bonham Carter")

SELECT title FROM movies, stars, people
WHERE stars.movie_id = movies.id
AND people.id = stars.person_id
GROUP BY title
HAVING people.name LIKE "Johnny Depp"
    AND people.name LIKE "Helena Bonham Carter";