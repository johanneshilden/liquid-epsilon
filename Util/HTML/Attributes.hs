module Util.HTML.Attributes where

import Util.HTML

action, align, alt, autocomplete, background, border, charset, checked, _class, cols, colspan, content, enctype, for, height, href, http_equiv, _id, maxlength, method, name, placeholder, role, rows, rowspan, selected, size, src, style, tabindex, target, title, _type, value, width :: String -> Attribute

action         = makeAttr "action"
align          = makeAttr "align"
alt            = makeAttr "alt"
autocomplete   = makeAttr "autocomplete"
background     = makeAttr "background"
border         = makeAttr "border"        
charset        = makeAttr "charset"   
checked        = makeAttr "checked"   
_class         = makeAttr "class"  
cols           = makeAttr "cols"
colspan        = makeAttr "colspan"   
content        = makeAttr "content"   
enctype        = makeAttr "enctype"   
for            = makeAttr "for" 
height         = makeAttr "height"  
href           = makeAttr "href"
http_equiv     = makeAttr "http-equiv"      
_id            = makeAttr "id"
maxlength      = makeAttr "maxlength"     
method         = makeAttr "method"  
name           = makeAttr "name"
placeholder    = makeAttr "placeholder"
role           = makeAttr "role"
rows           = makeAttr "rows"
rowspan        = makeAttr "rowspan"   
selected       = makeAttr "selected"    
size           = makeAttr "size"
src            = makeAttr "src"
style          = makeAttr "style" 
tabindex       = makeAttr "tabindex"    
target         = makeAttr "target"  
title          = makeAttr "title" 
_type          = makeAttr "type" 
value          = makeAttr "value" 
width          = makeAttr "width" 

