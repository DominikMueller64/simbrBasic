// [[Rcpp::plugins(cpp11)]]
#include <Rcpp.h>
#include <vector>

#include "Gamete.hpp"
#include "Individual.hpp"


Individual::Individual(){}

Individual::Individual(const Gamete& paternal, const Gamete& maternal):
  paternal(paternal), maternal(maternal){}

Individual::Individual(int pat_allele, int mat_allele,
           std::vector<double> L): // founder-constructor
  paternal(Gamete(pat_allele, L)), maternal(Gamete(mat_allele, L)){}

bool Individual::operator==(const Individual& other) const {return this == &other;}
bool Individual::is_homozygous() const {return paternal == maternal;}
