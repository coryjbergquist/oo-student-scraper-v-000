
[1mFrom:[0m /home/coryjbergquist/oo-student-scraper-v-000/lib/scraper.rb @ line 43 Scraper.scrape_profile_page:

    [1;34m24[0m: [32mdef[0m [1;36mself[0m.[1;34mscrape_profile_page[0m(profile_url)
    [1;34m25[0m:   profile_hash = {}
    [1;34m26[0m:   [1;34m# profile_hash[:twitter] = [][0m
    [1;34m27[0m:   [1;34m# profile_hash[:linkedin] = [][0m
    [1;34m28[0m:   [1;34m# profile_hash[:github] = [][0m
    [1;34m29[0m:   [1;34m# profile_hash[:blog] = [][0m
    [1;34m30[0m:   [1;34m# profile_hash[:profile_quote] = [][0m
    [1;34m31[0m:   [1;34m# profile_hash[:bio] = [][0m
    [1;34m32[0m:   html = open(profile_url)
    [1;34m33[0m:   doc = [1;34;4mNokogiri[0m::HTML(html)
    [1;34m34[0m: 
    [1;34m35[0m:   info_area = doc.css([31m[1;31m"[0m[31m.main-wrapper[1;31m"[0m[31m[0m)
    [1;34m36[0m:   info_area.each [32mdo[0m |x|
    [1;34m37[0m:     profile_hash[[33m:twitter[0m] = x.css([31m[1;31m"[0m[31m.vitals-container .social-icon-container a[1;31m"[0m[31m[0m).first[[31m[1;31m"[0m[31mhref[1;31m"[0m[31m[0m]
    [1;34m38[0m:     profile_hash[[33m:linkedin[0m] = x.css([31m[1;31m"[0m[31m.vitals-container .social-icon-container a[1;31m"[0m[31m[0m)[[1;34m1[0m][[31m[1;31m"[0m[31mhref[1;31m"[0m[31m[0m]
    [1;34m39[0m:     profile_hash[[33m:github[0m] =x.css([31m[1;31m"[0m[31m.vitals-container .social-icon-container a[1;31m"[0m[31m[0m)[[1;34m2[0m][[31m[1;31m"[0m[31mhref[1;31m"[0m[31m[0m]
    [1;34m40[0m:     profile_hash[[33m:blog[0m] = x.css([31m[1;31m"[0m[31m.vitals-container .social-icon-container a[1;31m"[0m[31m[0m)[[1;34m3[0m][[31m[1;31m"[0m[31mhref[1;31m"[0m[31m[0m]
    [1;34m41[0m:     profile_hash[[33m:profile_quote[0m] = x.css([31m[1;31m"[0m[31m.vitals-container .vitals-text-container .profile-quote[1;31m"[0m[31m[0m).text
    [1;34m42[0m:     profile_hash[[33m:bio[0m] = x.css([31m[1;31m"[0m[31m.details-container .description-holder p[1;31m"[0m[31m[0m).text
 => [1;34m43[0m:     binding.pry
    [1;34m44[0m: 
    [1;34m45[0m:     [1;34m# --GETS ALL SOCIAL MEDIA LINKS--[0m
    [1;34m46[0m:     [1;34m# social_media_links = x.css(".vitals-container .social-icon-container a")[0m
    [1;34m47[0m:     [1;34m# social_media_links.each do |x|[0m
    [1;34m48[0m:     [1;34m#   x["href"][0m
    [1;34m49[0m:    [32mend[0m
    [1;34m50[0m:   profile_hash
    [1;34m51[0m: [32mend[0m

