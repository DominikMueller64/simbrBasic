library('simbrBasic')

u <- new(Chromatid, 1, 100)
u$alleles
u$locations

i <- new(Individual, 1, 2, c(100, 200, 300))

g1 <- new(Gamete, 1, 100)
g2 <- new(Gamete, 5, 100)
i <- new(Individual, g1, g2)
i <- new(Individual, g1, g1)
i$is_homozygous()

