// [[Rcpp::plugins(cpp11)]]
#include <Rcpp.h>
#include <vector>
#include "Chromatid.hpp"

#ifndef GAMETE_H
#define GAMETE_H

class Gamete
{
  public:
    Gamete(); // default-constructor
    Gamete(int allele, std::vector<double> L); // founder-constructor
    Gamete(std::vector<Chromatid> chromatids); // data-constructor

    std::size_t length() const;
    void append(const Chromatid& chromatid);

    bool operator==(const Gamete& other) const;

   std::vector<Chromatid> chromatids;
};

#endif



