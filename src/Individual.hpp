// [[Rcpp::plugins(cpp11)]]
#include <Rcpp.h>
#include "Gamete.hpp"

#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

class Individual
{
 public:
  Individual(); // default-constructor
  Individual(int pat_allele, int mat_allele,
             std::vector<double> L); // founder-constructor

  Individual(const Gamete& paternal, const Gamete& maternal); // data-constructor

  bool operator==(const Individual& other) const;
  bool is_homozygous() const;

  Gamete paternal;
  Gamete maternal;
};

#endif
