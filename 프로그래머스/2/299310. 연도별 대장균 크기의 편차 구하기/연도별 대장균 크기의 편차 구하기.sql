-- 코드를 작성해주세요
WITH
    MAX_COLONY AS (
SELECT
    YEAR(DIFFERENTIATION_DATE) AS YEAR,
    MAX(SIZE_OF_COLONY) AS MAX_SIZE
FROM
    ECOLI_DATA
GROUP BY
    YEAR(DIFFERENTIATION_DATE))
SELECT
    YEAR(E.DIFFERENTIATION_DATE) AS YEAR,
    M.MAX_SIZE - E.SIZE_OF_COLONY AS YEAR_DEV,
    E.ID
FROM
    ECOLI_DATA AS E
JOIN
    MAX_COLONY AS M ON YEAR(E.DIFFERENTIATION_DATE) = M.YEAR
ORDER BY
    YEAR,
    YEAR_DEV
;